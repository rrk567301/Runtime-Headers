@interface TMMonoStructure : TMStructure

+ (id)readUnderURL:(id)a0 parent:(id)a1 error:(id *)a2;
+ (id)readOrBuiltUnderURL:(id)a0 parent:(id)a1 error:(id *)a2;
+ (void)enumerateURLsForReuseUnderURL:(id)a0 enumerator:(id /* block */)a1;

@end
