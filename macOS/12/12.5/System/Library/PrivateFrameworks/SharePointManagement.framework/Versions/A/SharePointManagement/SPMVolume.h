@class NSURL, NSString;

@interface SPMVolume : NSObject

@property (readonly) NSURL *URL;
@property (readonly) NSString *name;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 name:(id)a1;

@end
