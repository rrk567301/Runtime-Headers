@class NSString;

@interface HDOntologyMercuryZipTSVNodeLineImporter : NSObject <HDOntologyMercuryZipTSVLineImporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)importLineWithScanner:(id)a0 slot:(long long)a1 graphDatabase:(id)a2 context:(struct { long long x0; long long x1; unsigned long long x2; char x3; } *)a3 error:(id *)a4;
+ (char)isHeaderLine:(id)a0;


@end
