@class NSString, NSArray;

@interface BGFastPassSystemTaskRequest : BGNonRepeatingSystemTaskRequest

@property (copy, nonatomic) NSString *processingTaskIdentifier;
@property (copy, nonatomic) NSArray *processingTaskIdentifiers;
@property (nonatomic) long long semanticVersion;
@property (nonatomic) BOOL reRun;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
