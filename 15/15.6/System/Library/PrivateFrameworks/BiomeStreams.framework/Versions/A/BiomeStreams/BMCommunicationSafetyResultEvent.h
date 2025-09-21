@class NSString, NSArray, NSURL, NSData;

@interface BMCommunicationSafetyResultEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, copy, nonatomic) NSString *childID;
@property (readonly, copy, nonatomic) NSString *deviceID;
@property (readonly, copy, nonatomic) NSString *sourceBundleID;
@property (nonatomic) unsigned long long eventDirection;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned int contentCount;
@property (readonly, copy, nonatomic) NSArray *contactHandles;
@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *senderHandle;
@property (readonly, copy, nonatomic) NSURL *contentURL;
@property (readonly, copy, nonatomic) NSURL *conversationURL;
@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isEqual:(Class)a0;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithChildID:(id)a0 deviceID:(id)a1 sourceBundleID:(id)a2 absoluteTimeStamp:(double)a3 eventDirection:(unsigned long long)a4 eventType:(unsigned long long)a5 contentType:(unsigned long long)a6 contactHandles:(id)a7 contentID:(id)a8 conversationID:(id)a9 imageData:(id)a10 senderHandle:(id)a11 contentURL:(id)a12 conversationURL:(id)a13;
- (id)initWithChildID:(id)a0 deviceID:(id)a1 sourceBundleID:(id)a2 absoluteTimeStamp:(double)a3 eventDirection:(unsigned long long)a4 eventType:(unsigned long long)a5 contentType:(unsigned long long)a6 contactHandles:(id)a7 contentID:(id)a8 conversationID:(id)a9 imageData:(id)a10;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0 skipImage:(char)a1;
- (char)isCompleteWithContext:(id)a0 error:(id *)a1;
- (char)isValidWithContext:(id)a0 error:(id *)a1;

@end
