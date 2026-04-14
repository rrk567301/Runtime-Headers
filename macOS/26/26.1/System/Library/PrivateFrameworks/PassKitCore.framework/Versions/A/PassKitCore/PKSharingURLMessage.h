@class NSURL;

@interface PKSharingURLMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)configureWithContent:(id)a0;

@end
