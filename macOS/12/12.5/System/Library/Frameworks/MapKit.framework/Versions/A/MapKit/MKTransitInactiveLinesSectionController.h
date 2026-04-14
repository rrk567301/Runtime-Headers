@class NSArray;
@protocol GEOTransitLine;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {
    id<GEOTransitLine> _line;
}

@property (readonly, nonatomic) NSArray *inactiveLines;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_newStationCardUIEnabled;
- (void)_buildRows;
- (void)_setNeedsBuildRows;
- (id)_pagingFilter;
- (id)initWithMapItem:(id)a0 system:(id)a1 line:(id)a2;

@end
