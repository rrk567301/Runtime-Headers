@class NSString;

@interface CUFileItem : NSObject

@property (readonly, nonatomic) unsigned int flags;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) int type;

- (void).cxx_destruct;

@end
