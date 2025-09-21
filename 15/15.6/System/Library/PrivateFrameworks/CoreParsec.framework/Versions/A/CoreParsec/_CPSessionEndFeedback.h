@class NSString, NSData;

@interface _CPSessionEndFeedback : PBCodable <_CPProcessableFeedback, _CPSessionEndFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int reason;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)init;
- (char)isEqual:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
