@interface _MLNetworkHeaderEncoding : NSObject

+ (id)loadModel:(id)a0;
+ (unsigned long long)getHeaderSize;
+ (id)custom:(id)a0;
+ (id)unLoadModel:(id)a0;
+ (char)isHeaderCustom:(unsigned long long)a0;
+ (char)isHeaderUnLoad:(unsigned long long)a0;
+ (id)predictFeature:(id)a0;
+ (id)acknowledgeFailData;
+ (id)acknowledgeSucessData;
+ (id)constructDataPacket:(id)a0 HeaderEncoding:(unsigned long long)a1;
+ (unsigned long long)getHeaderDataSize:(id)a0;
+ (void *)getHeaderDataStart:(id)a0;
+ (unsigned long long)getHeaderEncoding:(id)a0;
+ (void *)getHeaderEnd:(id)a0;
+ (char)isHeaderAcknowledgeFailData:(unsigned long long)a0;
+ (char)isHeaderAcknowledgeSucessData:(unsigned long long)a0;
+ (char)isHeaderError:(unsigned long long)a0;
+ (char)isHeaderIncomingData:(unsigned long long)a0;
+ (char)isHeaderLoad:(unsigned long long)a0;
+ (char)isHeaderPredictFeature:(unsigned long long)a0;
+ (char)isHeaderText:(unsigned long long)a0;
+ (id)textDebug:(id)a0;

@end
