@class NSURL, NSString;

@interface SFSafariPageProperties : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) char usesPrivateBrowsing;
@property (nonatomic, getter=isActive) char active;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
