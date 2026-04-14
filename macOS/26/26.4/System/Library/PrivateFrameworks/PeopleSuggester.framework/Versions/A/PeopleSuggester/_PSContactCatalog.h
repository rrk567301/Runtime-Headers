@class NSString;

@interface _PSContactCatalog : NSObject

@property (class, readonly, nonatomic) NSString *kPSContactSummaryNameKey;
@property (class, readonly, nonatomic) NSString *kPSContactSummaryHandleKey;
@property (class, readonly, nonatomic) NSString *kPSContactSummaryLastInteractionTimeKey;
@property (class, readonly, nonatomic) NSString *kPSContactSummarySharingTimePatternKey;
@property (class, readonly, nonatomic) NSString *kPSContactSummarySharingContentPatternKey;
@property (class, readonly, nonatomic) NSString *kPSContactSummarySharingContentTagsKey;

- (void)saveJSONToFile:(id)a0;
- (id)convertSetsToArraysInObject:(id)a0;
- (id)generateContactCatalog:(id)a0 maxInteractions:(long long)a1 lookbackPeriodInMonths:(long long)a2 updateCatalog:(BOOL)a3;

@end
