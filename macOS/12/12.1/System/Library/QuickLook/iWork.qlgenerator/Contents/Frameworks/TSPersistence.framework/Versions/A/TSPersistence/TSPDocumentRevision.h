@class NSUUID, NSString;

@interface TSPDocumentRevision : NSObject <NSCopying>

@property (readonly, nonatomic) int sequence;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *revisionString;

+ (id)documentRevisionAtURL:(id)a0 passphrase:(id)a1 error:(id *)a2;
+ (id)revisionWithSequence:(int)a0 identifier:(id)a1;
+ (id)revisionWithRevisionString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSequence:(int)a0 identifier:(id)a1;
- (id)initWithRevisionString:(id)a0;
- (id)nextRevisionWithIdentifier:(id)a0;
- (long long)compareSequenceFromRevision:(id)a0;

@end
