@class NSURL;

@interface PKSharingURLMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)configureWithContent:(id)a0;

@end
