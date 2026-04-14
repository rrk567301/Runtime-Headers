@class NSString, _TtC21DocumentUnderstanding8DUResult;

@interface DUResultObjC : NSObject {
    _TtC21DocumentUnderstanding8DUResult *_underlyingResult;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *determiningModelIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
