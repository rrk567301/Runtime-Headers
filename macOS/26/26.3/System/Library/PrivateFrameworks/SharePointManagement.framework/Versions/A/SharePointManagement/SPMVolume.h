@class NSURL, NSString;

@interface SPMVolume : NSObject

@property (readonly) NSURL *URL;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 name:(id)a1;

@end
