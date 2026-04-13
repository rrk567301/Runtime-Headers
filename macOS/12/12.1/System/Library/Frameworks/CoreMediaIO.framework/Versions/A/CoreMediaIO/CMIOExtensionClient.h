@class NSUUID, NSString, STActivityAttribution;

@interface CMIOExtensionClient : NSObject <NSCopying> {
    struct { unsigned int val[8]; } _auditToken;
    STActivityAttribution *_stAttribution;
    NSString *_description;
}

@property (readonly, copy) NSUUID *clientID;
@property (readonly) int pid;

+ (id)clientInfoWithPID:(int)a0 clientID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithPID:(int)a0 clientID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2;
- (id)stAttribution;

@end
