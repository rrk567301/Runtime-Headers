@interface PFSQLiteQueryFactory : NSObject

+ (BOOL)bindToStatement:(struct sqlite3_stmt { } *)a0 objectDescriptor:(id)a1 fromCoder:(id)a2 database:(struct sqlite3 { } *)a3 error:(out id *)a4;
+ (BOOL)decodeObjectForColumn:(id)a0 stmt:(struct sqlite3_stmt { } *)a1 idx:(int)a2 outValue:(out id *)a3;
+ (BOOL)decodeObjectForDescriptor:(id)a0 stmt:(struct sqlite3_stmt { } *)a1 intoCoder:(id)a2;
+ (id)generateDeleteSQLForDescriptor:(id)a0 predicate:(id)a1 bindings:(out id /* block */ *)a2;
+ (id)generateInsertStatementForDescriptor:(id)a0 coder:(id)a1 canUpsert:(BOOL)a2 bindings:(out id /* block */ *)a3;
+ (id)generateSelectStatementForColumns:(id)a0 table:(id)a1 predicate:(id)a2 limitOffset:(id)a3 orderedBy:(id)a4 bindings:(out id /* block */ *)a5;
+ (id)generateSelectStatementForDescriptor:(id)a0 predicate:(id)a1 limitOffset:(id)a2 orderedBy:(id)a3 bindings:(out id /* block */ *)a4;

@end
