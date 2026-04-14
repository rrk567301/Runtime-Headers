@interface MPNondurableMediaItem : MPMediaItem {
    unsigned long long _persistentID;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)canFilterByProperty:(id)a0;
+ (id)defaultPropertyValues;

- (void)setValue:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForProperty:(id)a0;
- (unsigned long long)persistentID;
- (id)mediaLibrary;
- (void)incrementPlayCount;
- (id)initWithPersistentID:(unsigned long long)a0;
- (BOOL)existsInLibrary;
- (id)valuesForProperties:(id)a0;
- (BOOL)didSkipWithPlayedToTime:(double)a0;
- (void)markNominalAmountHasBeenPlayed;
- (void)noteWasPlayedToTime:(double)a0 skipped:(BOOL)a1;
- (void)incrementSkipCount;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:(double)a0;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id /* block */)a0;
- (double)nominalHasBeenPlayedThreshold;
- (BOOL)isUsableAsRepresentativeItem;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;

@end
