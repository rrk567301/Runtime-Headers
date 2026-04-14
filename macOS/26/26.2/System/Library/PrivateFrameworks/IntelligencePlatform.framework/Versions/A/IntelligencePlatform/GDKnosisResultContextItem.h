@class GDEntityIdentifier;

@interface GDKnosisResultContextItem : NSObject {
    void /* unknown type, empty encoding */ _entityId;
    void /* unknown type, empty encoding */ _answer;
}

@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)answer;
- (id)contextForAnswerParents;

@end
