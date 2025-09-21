@class NSString;

@interface BMStoreBookmark : NSObject <BMBookmark, NSCopying, NSSecureCoding, BMProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *streamId;
@property (readonly, nonatomic) NSString *segmentName;
@property (readonly, nonatomic) double iterationStartTime;
@property (readonly, nonatomic) unsigned long long offset;


- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)_descriptionDict;
- (id)encodeAsProto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStream:(id)a0 segment:(id)a1 iterationStartTime:(double)a2 offset:(unsigned long long)a3;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
