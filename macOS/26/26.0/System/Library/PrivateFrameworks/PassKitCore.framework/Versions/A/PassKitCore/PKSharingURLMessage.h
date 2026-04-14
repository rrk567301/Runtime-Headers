@class NSURL;

@interface PKSharingURLMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithURL:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)configureWithContent:(id)a0;

@end
