@class NSString;

@interface _EARExtractedEntity : NSObject {
    void /* function */ _entityContent;
    void /* function */ _tagName;
}

@property (nonatomic, copy) NSString *_entityContent;
@property (nonatomic, copy) NSString *_tagName;
@property (nonatomic, readonly) NSString *entityContent;
@property (nonatomic, readonly) NSString *tagName;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithEntityContent:(id)a0 tagName:(id)a1;

@end
