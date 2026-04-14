@class NSArray;

@interface _VZGraphicsDevice : NSObject

@property (readonly) long long type;
@property (readonly, copy) NSArray *framebuffers;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 framebuffers:(id)a1;

@end
