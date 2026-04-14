@class NSString;

@interface SLFetchShareableContentAction : SLShareableContentAction

@property (readonly, copy, nonatomic) NSString *requestedTypeIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSceneIdentifier:(id)a0 requestedTypeIdentifier:(id)a1 responseHandler:(id /* block */)a2;

@end
