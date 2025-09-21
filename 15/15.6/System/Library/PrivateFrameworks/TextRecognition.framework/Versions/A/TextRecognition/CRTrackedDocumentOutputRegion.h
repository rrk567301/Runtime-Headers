@interface CRTrackedDocumentOutputRegion : CRDocumentOutputRegion {
    unsigned long long _trackedRegionType;
}

+ (id)documentWithTrackedRegionGroups:(id)a0;
+ (id)documentWithTrackedRegions:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(char)a1 copyCandidates:(char)a2 deepCopy:(char)a3;

@end
