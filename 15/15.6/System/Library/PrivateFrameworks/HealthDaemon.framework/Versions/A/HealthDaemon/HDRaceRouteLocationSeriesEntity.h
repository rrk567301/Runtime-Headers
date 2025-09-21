@class NSString;

@interface HDRaceRouteLocationSeriesEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)primaryKeyColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)createRoutePointsFromWorkout:(id)a0 transaction:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)createTableSQLWithBehavior:(id)a0;
+ (char)deleteSeriesDataWithIdentifier:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (char)enumerateRoutePointsForSeries:(long long)a0 timestampAnchor:(double)a1 limit:(unsigned long long)a2 startDuration:(double)a3 finishDuration:(double)a4 transaction:(id)a5 error:(id *)a6 handler:(id /* block */)a7;
+ (char)enumerateRoutePointsForSeries:(long long)a0 timestampAnchor:(double)a1 limit:(unsigned long long)a2 transaction:(id)a3 error:(id *)a4 handler:(id /* block */)a5;
+ (char)hasROWID;
+ (id)indicesWithBehavior:(id)a0;
+ (char)insertCodableRoutePoints:(id)a0 seriesKey:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)insertCodableRoutePoints:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)triggersWithBehavior:(id)a0;


@end
