@class NSString;

@interface AVAssetAnalysisTextParsingMessage : AVAssetAnalysisMessage {
    void *_analysisTextParsingMessageInternal;
}

@property (readonly) NSString *messageType;
@property (readonly) NSString *diagnosticInformation;
@property (readonly) NSString *referencedText;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } textRange;
@property (readonly) long long lineNumber;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } textRangeInLine;

+ (id)assetAnalysisTextParsingMessageWithFigDictionary:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFigDictionary:(id)a0;
- (id)_figDictionary;

@end
