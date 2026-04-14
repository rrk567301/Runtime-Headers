@class NSURL, NSString;

@interface SPMVolume : NSObject

@property (readonly) NSURL *URL;
@property (readonly) NSString *name;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 name:(id)a1;

@end
