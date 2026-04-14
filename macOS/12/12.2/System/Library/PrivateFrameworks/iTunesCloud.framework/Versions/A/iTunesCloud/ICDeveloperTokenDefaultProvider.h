@class NSString;

@interface ICDeveloperTokenDefaultProvider : NSObject <ICDeveloperTokenProvider, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fetchDeveloperTokenForClientInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateCachedDeveloperTokenForClientInfo:(id)a0 completionHandler:(id /* block */)a1;

@end
