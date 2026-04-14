@class NSArray;

@interface NSCachedFetchRequestInfo : NSObject {
    NSArray *_substVarBindOrdering;
    NSArray *_substIntarrayBindOrdering;
    BOOL _isIneligibleForCaching;
}

- (void)dealloc;

@end
