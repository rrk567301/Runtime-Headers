@class NSDictionary, NSSet;

@interface BKSResultCollection : NSObject

@property (readonly, nonatomic) NSDictionary *symbolOwnerUUIDToSegmentNameToOffsetToResult;
@property (readonly, nonatomic) NSDictionary *symbolOwnerUUIDToOffsetIntoSymbolOwnerToResult;
@property (readonly, nonatomic) NSDictionary *symbolOwnerUUIDToAllResults;
@property (readonly, nonatomic) NSSet *allSymbolOwners;
@property (readonly, nonatomic) NSDictionary *requestToResult;

- (void).cxx_destruct;
- (id)initWithResults:(id)a0;
- (id)_uuidToTextSegmentOffsetToResultDict;
- (id)resultForSymbolOwnerUUID:(id)a0 offsetIntoSymbolOwner:(unsigned long long)a1;
- (id)resultForSymbolOwnerUUID:(id)a0 segmentName:(id)a1 offsetIntoSegment:(unsigned long long)a2;

@end
