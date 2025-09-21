@interface QTMovieModernizer : NSObject

+ (char)areWeRunningInASandbox;
+ (unsigned int)checkIfMediaTypeToPassthrough:(unsigned int)a0 subType:(unsigned int)a1;
+ (unsigned int)checkIfOldMP3Track:(unsigned int)a0 subType:(unsigned int)a1;
+ (unsigned int)checkIfTrackSubtypeTypeForAVF:(unsigned int)a0;
+ (unsigned int)checkIfTrackSubtypeTypeForQuickTime:(unsigned int)a0;
+ (unsigned int)checkIfTrackTypeNeedsModernization:(unsigned int)a0;
+ (unsigned int)checkIfTrackTypeToSkipDuringModernization:(unsigned int)a0;
+ (unsigned int)checkIfTrackTypeToSkipWhenNotSelfContained:(unsigned int)a0;
+ (char)checkMovieModernizeRequired:(id)a0 isReferenceMovie:(char *)a1;
+ (void *)createExportSourceForTrackNumber:(int)a0 sourceURL:(id)a1 mediaType:(unsigned int)a2;
+ (char)isSubtypeSupportedInSandbox:(unsigned int)a0 subType:(unsigned int)a1;
+ (unsigned int)isTrackMediaTypeHandledByQuickTime:(unsigned int)a0;
+ (unsigned int)isTrackMediaTypeIgnoredByCoreMedia:(unsigned int)a0;
+ (char)requiresModernization:(id)a0 error:(id *)a1;
+ (int)trackIndexForTrackID:(id)a0 inArray:(id)a1;

- (id)init;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;

@end
