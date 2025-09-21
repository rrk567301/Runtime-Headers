@class NSArray, NSSet, NSData, ICTTMergeableWallClockValue;

@interface ICOutlineState : NSObject

@property (readonly, copy, nonatomic) NSArray *collapsedUUIDStrings;
@property (retain, nonatomic) ICTTMergeableWallClockValue *mergeableValue;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSSet *collapsedUUIDs;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (char)mergeWithState:(id)a0;
- (id)initWithCollapsedUUIDs:(id)a0;
- (char)isEqualToICOutlineState:(id)a0;
- (void)updateCollapsedUUIDs;

@end
