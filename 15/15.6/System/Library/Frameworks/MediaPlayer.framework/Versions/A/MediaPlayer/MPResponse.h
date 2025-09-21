@class NSArray, NSString;

@interface MPResponse : NSObject <NSCopying, NSObject>

@property (copy, nonatomic) NSArray *middleware;
@property (readonly, nonatomic) id builder;
@property (readonly, copy, nonatomic) id request;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)builderProtocol;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_stateDumpObject;
- (id)chain;
- (id)initWithRequest:(id)a0 middleware:(id)a1;

@end
