@class NSArray;
@protocol GEOTransitLine;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {
    id<GEOTransitLine> _line;
}

@property (readonly, nonatomic) NSArray *inactiveLines;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_newStationCardUIEnabled;
- (void)_setNeedsBuildRows;
- (void)_buildRows;
- (id)initWithMapItem:(id)a0 system:(id)a1 line:(id)a2;
- (id)_pagingFilter;

@end
