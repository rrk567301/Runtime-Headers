@class NSString;

@interface DAMessageMoveRequest : NSObject

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *fromFolder;
@property (copy, nonatomic) NSString *toFolder;
@property (retain, nonatomic) id context;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initMoveRequestWithMessage:(id)a0 fromFolder:(id)a1 toFolder:(id)a2;

@end
