@class NSNumber;
@protocol CKVUnifiedContentDataType;

@interface CKVSharedItem : NSObject

@property (readonly, nonatomic) NSNumber *sharedIdentifier;
@property (readonly, nonatomic) id<CKVUnifiedContentDataType> item;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentHash:(id)a0 content:(id)a1;

@end
