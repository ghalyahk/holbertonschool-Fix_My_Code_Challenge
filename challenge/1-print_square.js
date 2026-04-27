#!/usr/bin/node

const n = parseInt(process.argv[2]);

if (isNaN(n)) {
  process.exit(1);
}

for (let i = 0; i < n; i++) {
  console.log('#'.repeat(n));
}
