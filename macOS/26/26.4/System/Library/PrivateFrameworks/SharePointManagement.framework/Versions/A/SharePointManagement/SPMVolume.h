@class NSURL, NSString;

@interface SPMVolume : NSObject

@property (readonly) NSURL *URL;
@property (readonly) NSString *name;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 name:(id)a1;

@end
