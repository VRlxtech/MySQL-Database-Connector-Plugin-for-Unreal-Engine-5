
USE TEST;

DROP TABLE IF EXISTS `test`.`db_table`;

CREATE TABLE  `test`.`db_table` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `Description` varchar(45) DEFAULT NULL,
  `Value` int(10) unsigned DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

INSERT INTO `db_table` (`id`,`Description`,`Value`) VALUES 
 (1,'Test',1);
 
 