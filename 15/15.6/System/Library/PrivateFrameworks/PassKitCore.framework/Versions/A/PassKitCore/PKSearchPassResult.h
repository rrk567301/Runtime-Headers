@class NSString;

@interface PKSearchPassResult : NSObject <PKSearchAutocompleteToken>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)tokenType;

@end
