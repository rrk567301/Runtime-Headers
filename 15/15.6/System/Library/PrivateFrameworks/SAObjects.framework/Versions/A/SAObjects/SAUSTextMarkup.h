@class NSString;

@interface SAUSTextMarkup : AceObject <SAUSMarkup, SAAceSerializable>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char emphasized;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textMarkup;
+ (id)textMarkupWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
