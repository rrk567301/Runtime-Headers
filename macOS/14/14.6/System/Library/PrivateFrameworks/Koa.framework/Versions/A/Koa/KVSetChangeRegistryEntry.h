@class NSString;
@protocol BMBookmark;

@interface KVSetChangeRegistryEntry : NSObject {
    NSString *_description;
    int _updatedSharedItemCount;
    id<BMBookmark> _updatedBookmark;
}

@property (readonly, nonatomic) int priorSharedItemCount;
@property (readonly, nonatomic) id<BMBookmark> priorBookmark;

+ (id)decodeEntry:(id)a0 description:(id)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (void)didProcessSetChange:(id)a0;
- (void)didReceiveNewBookmark:(id)a0;
- (BOOL)encodeEntry:(id *)a0 error:(id *)a1;
- (id)initWithDescription:(id)a0 sharedItemCount:(int)a1 bookmark:(id)a2;

@end
