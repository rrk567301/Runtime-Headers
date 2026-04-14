@class NSMutableDictionary;

@interface ASTControlCommand : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL forceSequential;
@property (nonatomic) BOOL haltOnError;
@property (retain, nonatomic) NSMutableDictionary *actionStorage;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)reset;
- (id)requestData;
- (id)requestWithData:(id)a0 session:(id)a1 queue:(id)a2;
- (void)performActionsWithSession:(id)a0 queue:(id)a1;
- (void)updateAction:(id)a0;
- (BOOL)allActionsFinished;

@end
