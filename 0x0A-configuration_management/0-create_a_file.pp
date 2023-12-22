# Creates a file /tmp/school with certain permissions, content, owner or group
file { '/tmp/holberton':
  ensure  => file,
  mode    => '0744',
  owner   => www-data,
  group   => www-data,
  content => 'I love Puppet',
}
