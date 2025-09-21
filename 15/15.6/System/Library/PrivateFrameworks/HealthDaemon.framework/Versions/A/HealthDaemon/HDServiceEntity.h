@interface HDServiceEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)allServicesWithProfile:(id)a0 error:(id *)a1;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)deleteService:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (char)healthUpdatesEnabledForDevice:(id)a0 inDatabase:(id)a1 error:(id *)a2;
+ (id)insertOrUpdateService:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (char)setHealthUpdatesEnabled:(char)a0 forDevice:(id)a1 inDatabase:(id)a2 error:(id *)a3;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end
