@interface HDUserDomainConceptEducationContentSectionEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (char)addSectionsToCodable:(id)a0 educationContentID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)enumerateLocalizedEducationContentSectionsWithEducationContentID:(long long)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (char)insertLocalizedEducationContentSectionsFor:(id)a0 educationContentID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)privateSubEntities;

@end
