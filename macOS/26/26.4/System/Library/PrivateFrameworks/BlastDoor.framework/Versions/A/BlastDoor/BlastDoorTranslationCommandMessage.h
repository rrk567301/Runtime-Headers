@class NSString, NSArray;

@interface BlastDoorTranslationCommandMessage : NSObject {
    void /* unknown type, empty encoding */ translationCommandMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSArray *parts;

- (void).cxx_destruct;
- (id)init;

@end
