@class NSString, GEOPDRetainedSearchMetadata;

@interface GEORetainedSearchMetadata : NSObject <NSCopying> {
    GEOPDRetainedSearchMetadata *_retainedSearchMetadata;
}

@property (readonly, nonatomic, getter=_query) NSString *query;
@property (readonly, nonatomic) NSString *sourceAppID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRetainedSearchMetadata:(id)a0;
- (id)_retainedSearchMetadata;

@end
