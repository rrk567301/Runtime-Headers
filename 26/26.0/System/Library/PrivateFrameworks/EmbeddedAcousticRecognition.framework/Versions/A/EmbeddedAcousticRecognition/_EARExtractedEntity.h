@class NSString;

@interface _EARExtractedEntity : NSObject {
    void /* function */ entityContent;
    void /* function */ tagName;
}

@property (nonatomic, readonly) NSString *entityContent;
@property (nonatomic, readonly) NSString *tagName;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntityContent:(id)a0 tagName:(id)a1;

@end
