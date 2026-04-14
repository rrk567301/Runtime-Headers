@interface CADEventOccurrenceSet : NSObject {
    struct { int x0; struct __CFDictionary *x1; } *_dbs;
    int _dbCount;
    int _dbCapacity;
}

- (void)clear;
- (void)dealloc;
- (BOOL)addOccurrenceWithDB:(int)a0 rowID:(int)a1 date:(id)a2;
- (id)datesForDatabase:(int)a0 rowID:(int)a1;
- (void)enumerateDatabases:(id /* block */)a0;
- (void)enumerateOccurrenceRowIDsInDatabase:(int)a0 block:(id /* block */)a1;
- (struct { int x0; struct __CFDictionary *x1; } *)infoForDB:(int)a0;
- (BOOL)setOccurrenceDatesWithDB:(int)a0 rowID:(int)a1 dates:(id)a2 outRemovedDates:(id)a3 outAddedAnyDates:(BOOL *)a4;

@end
