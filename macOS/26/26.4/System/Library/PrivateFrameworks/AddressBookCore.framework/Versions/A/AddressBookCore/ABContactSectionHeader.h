@class NSString, NSArray, NSDictionary;

@interface ABContactSectionHeader : NSObject {
    NSDictionary *_info;
}

@property (readonly) NSString *firstCharacterAfterLanguage;
@property (readonly) NSString *lastCharacter;
@property (readonly) NSArray *headers;
@property (readonly) NSString *nameTransform;

- (id)initWithInfo:(id)a0;
- (id)description;
- (void)dealloc;

@end
