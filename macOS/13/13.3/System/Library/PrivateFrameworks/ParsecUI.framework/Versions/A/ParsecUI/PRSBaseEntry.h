@class NSString, NSURL, NSImage;

@interface PRSBaseEntry : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) int imageAlign;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;

@end
