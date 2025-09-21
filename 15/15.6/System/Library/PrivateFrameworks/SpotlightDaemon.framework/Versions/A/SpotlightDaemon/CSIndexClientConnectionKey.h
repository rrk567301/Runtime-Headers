@class NSObject;
@protocol OS_xpc_object;

@interface CSIndexClientConnectionKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;

+ (id)keyWithConnection:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;

@end
