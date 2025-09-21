@class NSMutableDictionary;

@interface ASTControlCommand : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char forceSequential;
@property (nonatomic) char haltOnError;
@property (retain, nonatomic) NSMutableDictionary *actionStorage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)reset;
- (id)requestData;
- (id)completionArray;
- (char)allActionsFinished;
- (void)performActionsWithSession:(id)a0 queue:(id)a1;
- (id)requestWithData:(id)a0 session:(id)a1 queue:(id)a2;
- (void)updateAction:(id)a0;

@end
