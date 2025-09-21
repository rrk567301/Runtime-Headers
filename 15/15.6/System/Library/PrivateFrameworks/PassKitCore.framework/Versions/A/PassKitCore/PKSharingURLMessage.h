@class NSURL;

@interface PKSharingURLMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSURL *url;

+ (char)supportsSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)configureWithContent:(id)a0;

@end
