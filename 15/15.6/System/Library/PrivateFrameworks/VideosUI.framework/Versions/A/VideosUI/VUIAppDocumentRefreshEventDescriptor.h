@class NSString;

@interface VUIAppDocumentRefreshEventDescriptor : VUIAppDocumentUpdateEventDescriptor

@property (nonatomic) unsigned long long delayInSeconds;
@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventType:(unsigned long long)a0;
- (id)initWithEventType:(unsigned long long)a0 delayInSeconds:(unsigned long long)a1 name:(id)a2;

@end
