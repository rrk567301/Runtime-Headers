@class NSNumber, NSString, CKContainerID;

@interface CKContainerIDTableEntry : CKSQLiteTableEntry {
    CKContainerID *_containerID;
}

@property (retain, nonatomic) NSNumber *containerIDKey;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (nonatomic) long long environment;

+ (Class)tableClass;

- (id)containerID;
- (void).cxx_destruct;
- (id)initWithCKContainerID:(id)a0;
- (BOOL)matchesContainerID:(id)a0;

@end
